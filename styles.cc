/* 1. Variables de Identidad Visual (Personaliza estos valores) */
:root {
  --color-primary: #2563eb;       /* Cambia según tu dominio */
  --color-primary-hover: #1d4ed8;
  --color-secondary: #64748b;
  --color-bg: #f8fafc;
  --color-surface: #ffffff;
  --color-text: #0f172a;
  --color-text-muted: #475569;
  --color-border: #e2e8f0;
  
  /* Estados */
  --color-success: #16a34a;
  --color-error: #dc2626;
  --color-warning: #d97706;

  /* Espaciado y bordes */
  --radius: 8px;
  --space: 1rem;
  --font-sans: system-ui, -apple-system, 'Segoe UI', Roboto, sans-serif;
}

/* 2. Reset y Tipografía Base */
* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: var(--font-sans);
  background-color: var(--color-bg);
  color: var(--color-text);
  line-height: 1.6;
  display: flex;
  flex-direction: column;
  min-height: 100vh;
}

.container {
  width: 100%;
  max-width: 1100px;
  margin: 0 auto;
  padding: 2rem var(--space);
  flex: 1;
}

/* 3. Navegación */
.site-header {
  background-color: var(--color-surface);
  border-bottom: 1px solid var(--color-border);
  padding: 1rem 0;
}

.site-header nav {
  max-width: 1100px;
  margin: 0 auto;
  padding: 0 var(--space);
  display: flex;
  justify-content: space-between;
  align-items: center;
  flex-wrap: wrap;
  gap: 1rem;
}

.logo {
  font-weight: 700;
  font-size: 1.25rem;
  color: var(--color-primary);
  text-decoration: none;
}

.nav-links {
  display: flex;
  align-items: center;
  gap: 1.25rem;
}

.nav-links a {
  text-decoration: none;
  color: var(--color-text);
  font-weight: 500;
}

.nav-links a:hover, .nav-links a.active {
  color: var(--color-primary);
}

/* 4. Botones */
.btn {
  display: inline-block;
  padding: 0.6rem 1.2rem;
  border-radius: var(--radius);
  font-weight: 600;
  text-decoration: none;
  border: none;
  cursor: pointer;
  font-size: 0.95rem;
  transition: background-color 0.2s;
}

.btn-primary {
  background-color: var(--color-primary);
  color: #ffffff;
}

.btn-primary:hover {
  background-color: var(--color-primary-hover);
}

.btn-secondary {
  background-color: var(--color-border);
  color: var(--color-text);
}

.btn-danger {
  background-color: var(--color-error);
  color: #ffffff;
}

/* 5. Tarjetas y Formularios */
.card {
  background: var(--color-surface);
  border: 1px solid var(--color-border);
  border-radius: var(--radius);
  padding: 1.5rem;
  box-shadow: 0 1px 3px rgba(0,0,0,0.05);
}

.login-card {
  max-width: 420px;
  margin: 2rem auto;
}

.form-group {
  margin-bottom: 1.25rem;
}

.form-group label {
  display: block;
  font-weight: 600;
  margin-bottom: 0.4rem;
}

.form-group input, .form-group select, .form-group textarea {
  width: 100%;
  padding: 0.65rem;
  border: 1px solid var(--color-border);
  border-radius: var(--radius);
  font-size: 1rem;
}

.form-group input:focus {
  outline: 2px solid var(--color-primary);
  border-color: transparent;
}

.help-text {
  font-size: 0.85rem;
  color: var(--color-text-muted);
  margin-top: 0.25rem;
}

/* 6. Tablas */
.table-wrapper {
  overflow-x: auto;
  background: var(--color-surface);
  border-radius: var(--radius);
  border: 1px solid var(--color-border);
}

table {
  width: 100%;
  border-collapse: collapse;
  text-align: left;
}

th, td {
  padding: 0.9rem 1rem;
  border-bottom: 1px solid var(--color-border);
}

th {
  background-color: var(--color-bg);
  font-weight: 600;
}

/* 7. Mensajes de Django (Feedback UX) */
.messages {
  list-style: none;
  margin-bottom: 1.5rem;
}

.message {
  padding: 0.9rem 1rem;
  border-radius: var(--radius);
  margin-bottom: 0.5rem;
  font-weight: 500;
}

.message.success {
  background-color: #dcfce7;
  color: #166534;
  border: 1px solid #86efac;
}

.message.error {
  background-color: #fee2e2;
  color: #991b1b;
  border: 1px solid #fca5a5;
}

/* 8. Footer */
.site-footer {
  text-align: center;
  padding: 1.5rem;
  background-color: var(--color-surface);
  border-top: 1px solid var(--color-border);
  color: var(--color-text-muted);
  font-size: 0.9rem;
}

/* 9. Responsive (Móvil) */
@media (max-width: 768px) {
  .site-header nav {
    flex-direction: column;
    align-items: flex-start;
  }

  .nav-links {
    flex-direction: column;
    align-items: flex-start;
    width: 100%;
    gap: 0.75rem;
  }

  .btn {
    width: 100%;
    text-align: center;
    margin-bottom: 0.5rem;
  }
}
