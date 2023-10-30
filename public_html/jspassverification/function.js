function verifyPassword() {
    const password = document.getElementById('password').value;
    const confirmPassword = document.getElementById('confirmPassword').value;
    if (password.length < 8) {
      alert('Password must be at least eight characters long.');
    } else if (password !== confirmPassword) {
      alert('Passwords do not match. Please try again.');
    } else {
      alert('Passwords matched successfully!');
    }
  }
  
  document.getElementById('verify').addEventListener('click', verifyPassword);