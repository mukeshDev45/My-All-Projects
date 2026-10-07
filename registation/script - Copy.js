(function() {
    const form = document.getElementById('registrationForm');
    const modal = document.getElementById('successModal');
    const modalMessage = document.getElementById('modalMessage');
    const termsCheck = document.getElementById('termsCheck');

    form.addEventListener('submit', function(e) {
        e.preventDefault();

        if (!termsCheck.checked) {
            termsCheck.setCustomValidity('Please agree to the terms to continue.');
            termsCheck.reportValidity();
            return;
        }

        termsCheck.setCustomValidity('');
        
        const nameInput = document.getElementById('fullname');
        const name = nameInput.value.trim() || 'Mukesh';
        modalMessage.textContent = `Welcome, ${name}!`;
        modal.classList.add('active');
    });

    termsCheck.addEventListener('change', function() {
        if (this.checked) {
            this.setCustomValidity('');
        }
    });

    window.closeModal = function() {
        modal.classList.remove('active');
        form.reset();
    };

    window.addEventListener('click', function(e) {
        if (e.target === modal) {
            modal.classList.remove('active');
            form.reset();
        }
    });
})();