(function() {
    const form = document.getElementById('registrationForm');
    const modal = document.getElementById('successModal');
    const modalMessage = document.getElementById('modalMessage');

    const fullname = document.getElementById('fullname');
    const email = document.getElementById('email');
    const password = document.getElementById('password');
    const role = document.getElementById('role');
    const gender = document.querySelectorAll('input[name="gender"]');
    const terms = document.getElementById('termsCheck');

    const nameError = document.getElementById('nameError');
    const emailError = document.getElementById('emailError');
    const passwordError = document.getElementById('passwordError');
    const roleError = document.getElementById('roleError');
    const genderError = document.getElementById('genderError');
    const termsError = document.getElementById('termsError');

    function validateName() {
        const value = fullname.value.trim();
        if (value.length === 0) {
            nameError.textContent = '❌ Full name is required.';
            fullname.parentElement.classList.add('error');
            fullname.parentElement.classList.remove('success');
            return false;
        } else if (value.length < 3) {
            nameError.textContent = '❌ Name must be at least 3 characters.';
            fullname.parentElement.classList.add('error');
            fullname.parentElement.classList.remove('success');
            return false;
        } else {
            nameError.textContent = '✅';
            fullname.parentElement.classList.remove('error');
            fullname.parentElement.classList.add('success');
            return true;
        }
    }

    function validateEmail() {
        const value = email.value.trim();
        const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (value.length === 0) {
            emailError.textContent = '❌ Email is required.';
            email.parentElement.classList.add('error');
            email.parentElement.classList.remove('success');
            return false;
        } else if (!emailPattern.test(value)) {
            emailError.textContent = '❌ Enter a valid email (e.g., user@example.com).';
            email.parentElement.classList.add('error');
            email.parentElement.classList.remove('success');
            return false;
        } else {
            emailError.textContent = '✅';
            email.parentElement.classList.remove('error');
            email.parentElement.classList.add('success');
            return true;
        }
    }

    function validatePassword() {
        const value = password.value.trim();
        if (value.length === 0) {
            passwordError.textContent = '❌ Password is required.';
            password.parentElement.classList.add('error');
            password.parentElement.classList.remove('success');
            return false;
        } else if (value.length < 6) {
            passwordError.textContent = '❌ Password must be at least 6 characters.';
            password.parentElement.classList.add('error');
            password.parentElement.classList.remove('success');
            return false;
        } else if (!/[A-Z]/.test(value)) {
            passwordError.textContent = '❌ Must contain at least 1 uppercase letter.';
            password.parentElement.classList.add('error');
            password.parentElement.classList.remove('success');
            return false;
        } else if (!/[0-9]/.test(value)) {
            passwordError.textContent = '❌ Must contain at least 1 number.';
            password.parentElement.classList.add('error');
            password.parentElement.classList.remove('success');
            return false;
        } else {
            passwordError.textContent = '✅';
            password.parentElement.classList.remove('error');
            password.parentElement.classList.add('success');
            return true;
        }
    }

    function validateRole() {
        const value = role.value;
        if (value === '') {
            roleError.textContent = '❌ Please select a role.';
            role.parentElement.classList.add('error');
            role.parentElement.classList.remove('success');
            return false;
        } else {
            roleError.textContent = '✅';
            role.parentElement.classList.remove('error');
            role.parentElement.classList.add('success');
            return true;
        }
    }

    function validateGender() {
        let selected = false;
        gender.forEach(g => {
            if (g.checked) selected = true;
        });
        if (!selected) {
            genderError.textContent = '❌ Please select a gender.';
            return false;
        } else {
            genderError.textContent = '✅';
            return true;
        }
    }

    function validateTerms() {
        if (!terms.checked) {
            termsError.textContent = '❌ You must agree to the terms.';
            return false;
        } else {
            termsError.textContent = '✅';
            return true;
        }
    }

    fullname.addEventListener('input', validateName);
    email.addEventListener('input', validateEmail);
    password.addEventListener('input', validatePassword);
    role.addEventListener('change', validateRole);
    gender.forEach(g => g.addEventListener('change', validateGender));
    terms.addEventListener('change', validateTerms);

    form.addEventListener('submit', function(e) {
        e.preventDefault();

        const isNameValid = validateName();
        const isEmailValid = validateEmail();
        const isPasswordValid = validatePassword();
        const isRoleValid = validateRole();
        const isGenderValid = validateGender();
        const isTermsValid = validateTerms();

        if (isNameValid && isEmailValid && isPasswordValid && isRoleValid && isGenderValid && isTermsValid) {
            const name = fullname.value.trim();
            modalMessage.textContent = `Welcome, ${name}!`;
            modal.classList.add('active');
        } else {
            const firstError = document.querySelector('.input-group.error, .inline-group .error-message');
            if (firstError) {
                firstError.scrollIntoView({ behavior: 'smooth', block: 'center' });
            }
        }
    });

    window.closeModal = function() {
        modal.classList.remove('active');
        form.reset();
        document.querySelectorAll('.input-group').forEach(el => {
            el.classList.remove('error', 'success');
        });
        document.querySelectorAll('.error-message').forEach(el => {
            el.textContent = '';
        });
    };

    window.addEventListener('click', function(e) {
        if (e.target === modal) {
            modal.classList.remove('active');
            form.reset();
            document.querySelectorAll('.input-group').forEach(el => {
                el.classList.remove('error', 'success');
            });
            document.querySelectorAll('.error-message').forEach(el => {
                el.textContent = '';
            });
        }
    });
})();