#if 1



#define CLOUD_CLIENT_PRIVATE_KEY \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEowIBAAKCAQEAmKf2zNGX+q7bKmPKxXtlp/L3lPIA/wtkxEnb6TpdneIFLV6q\n" \
"MZCbrOziPyvpVnJU1V2+ktfPBkBvW4XEvva6RJX5GZCW92jRNhavlgcrIordmc6G\n" \
"4mPpZ6b0DNXlssUOUctu6pOmCKrx26fGtjALBcAp4UaktwNo6DJVMFQvma7YMJyo\n" \
"1BL6/oYwWkuzmjg3lnUUfPdWhWCEc38QjpQQIvYh2enZB0us0zGoG91XKL7aRg2u\n" \
"ACcKZGgs+sY9DI67a+QmYUOIkm+aclnXQW/5b+zzB2bV08/oeZ1dMAhHypz4xvUg\n" \
"R9O8hPKSwZSS+8/UtYNhC2+psKHSXHNccHuxYQIDAQABAoIBAQCXZMRzfk2ONIlw\n" \
"scUwMt+vP1vgYF0ykzcdH+6zj8m2QahGxYJeY36wccEzSzY/IGYXsL/GW7aaCZ8m\n" \
"kjR7+q7iRCXl/6potY/+Z2M9k+BognWhCtxkexfITx/r9tm1gI5h+jIG++UG5Zm0\n" \
"8OA2YNEdo+Uk4G2Mfxo0ZW5s3qDSdLcfVVOzQW57fnOZGTQjgXzngQUlVaAdqS6S\n" \
"VgRoE5NwwfynE2JdIGZ5fXsLXBndd/Lb1DkZjlbwEplLFbcgxbJeHHrp6JGHtEIQ\n" \
"kZgBeKdWJj2CYRfHi0k25xoF1BaQXDkXiakfDTxQENoZ89Yugw7dQi7jfHjTOjPL\n" \
"IMwj0029AoGBAMbZROh0K21ppUbxskE32+VsN8TB5ty4wzWvq+mbQb3bq43rqQ9t\n" \
"47dDfP3gnTke2w90+fFmqHhCxGTZtQgj9Z2MZNH8a2OIisafZ8wyKumfUROXjVD1\n" \
"g7GD9LuDXuz1qhSIfOqfkPlwUeIwPL/wuKEZQYBSEoInxvZyOVurISVTAoGBAMSH\n" \
"+RJBW96nR93jtM32LhQH8OecrX0pbyoEpo74DFPYRIa7TBD+xmqTGOB5CYt8nWzI\n" \
"lLM03XkxhtGOTgxFOwzx6memJapsgGzgkCmi0jhQZFZqqvdUjQ04QxEdPCSk/L+f\n" \
"UR9lgVTxk3NsUqb6nyiMkKsVVihwEHEhOqXdn2P7AoGAHNh50YrAnf+cVT1MkX9r\n" \
"680WDfne5pf64XfZZWr7T3JlYZIVFULorLYilKWXySh7uLNMasNsnv14hfS6+TJW\n" \
"OAOcwIVwgqDVGNkY8ps4dGmDFmd+vYbQEtlEkEsPYyqEALSIAnUhT74Gctxyg5mE\n" \
"/wGt6dJ+Etl4WFnbjju19DcCgYBxCTvqkgkDEPe22cceRx/NiZu3u1fVi0VSx4X8\n" \
"6RI+Dz+qtoNTqxX4Kk6+nR8uSShKbzuHrzpLAH9ofA7L4+3IzkNiBh/X27wp4ydH\n" \
"q0x581MimQtoYgsWtWttpoD3GqX8mOeRxVITxzZlxsHrJG7yZZa3r/f0HjB2wQP4\n" \
"bnXEjQKBgGTI8qE9MOK5HhFlHMpsV+B6r7bpNKOwF1tLp3f/WOVecmdD1n+AePJK\n" \
"9bBMutfRhsI0dKP+dk7KXGOn8c+GPVXap4V7zgMnOx0NRwI58kWWBIvtMHh4DkJ9\n" \
"TfvteZ3SkQMK21ukD/MIHzNRiV0Vk0EWve/FUZXu+65cjeqqAAcH\n" \
"-----END RSA PRIVATE KEY-----\n"

#define CLOUD_CLIENT_PUBLIC_CERTIFICATE \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDrjCCApYCFGyADsDRkFZx3IOpIU5ZLIyniKqHMA0GCSqGSIb3DQEBCwUAMIGM\n" \
"MQswCQYDVQQGEwJHQjEPMA0GA1UECAwGTG9uZG9uMQ8wDQYDVQQHDAZMb25kb24x\n" \
"GDAWBgNVBAoMD0dsb2JhbCBTZWN1cml0eTEWMBQGA1UECwwNSVQgRGVwYXJ0bWVu\n" \
"dDEpMCcGA1UEAwwgNEQ2REMzMEI5MDI0NDVGRDlENzUzQTRDREFFQjRDMDYwHhcN\n" \
"MjMxMjIwMTEwMDI1WhcNMjQxMjE5MTEwMDI1WjCBmTELMAkGA1UEBhMCR0IxDzAN\n" \
"BgNVBAgMBkxvbmRvbjEPMA0GA1UEBwwGTG9uZG9uMRgwFgYDVQQKDA9HbG9iYWwg\n" \
"U2VjdXJpdHkxFjAUBgNVBAsMDUlUIERlcGFydG1lbnQxNjA0BgNVBAMMLTRENkRD\n" \
"MzBCOTAyNDQ1RkQ5RDc1M0E0Q0RBRUI0QzA2LUNBU2lnblRlc3QwMTCCASIwDQYJ\n" \
"KoZIhvcNAQEBBQADggEPADCCAQoCggEBAJin9szRl/qu2ypjysV7Zafy95TyAP8L\n" \
"ZMRJ2+k6XZ3iBS1eqjGQm6zs4j8r6VZyVNVdvpLXzwZAb1uFxL72ukSV+RmQlvdo\n" \
"0TYWr5YHKyKK3ZnOhuJj6Wem9AzV5bLFDlHLbuqTpgiq8dunxrYwCwXAKeFGpLcD\n" \
"aOgyVTBUL5mu2DCcqNQS+v6GMFpLs5o4N5Z1FHz3VoVghHN/EI6UECL2Idnp2QdL\n" \
"rNMxqBvdVyi+2kYNrgAnCmRoLPrGPQyOu2vkJmFDiJJvmnJZ10Fv+W/s8wdm1dPP\n" \
"6HmdXTAIR8qc+Mb1IEfTvITyksGUkvvP1LWDYQtvqbCh0lxzXHB7sWECAwEAATAN\n" \
"BgkqhkiG9w0BAQsFAAOCAQEAKXuN6ww/mk8zH9G58hQ91P1F/H3gmQDm6nLjUPJh\n" \
"sE6cvJ2n/pci1glBQIk5ZQP9nufhb0Ihl5Ie7Zsa2Yh7WR4betmPBTj4KRGfeTQE\n" \
"or+dd8anIjeBZuEC1EyVDvlDbPXzdDG6WJ0vR1XtmkmOhV2z0/Jj8bmMKz/hW3lk\n" \
"0hIdw5YlIxCvYVpR3Hc27OJYrzxJl7KBRNEKbmWw3Zh1O+8ZdUQvDm+7M+ERL+RT\n" \
"WLrDYBEjbo46DLNYcW5Jhpq/MkcXcBCd5bxQvcT5DDjCVwxRS6VLPBtMstTZ0xDk\n" \
"F4CVydZWV8t2FOmrqILuN+w7QpEisavRcO7h6b0oytnVew==\n" \
"-----END CERTIFICATE-----\n"

#define CLOUD_CA_CERTIFICATE \
"-----BEGIN CERTIFICATE-----\n" \
"MIID+zCCAuOgAwIBAgIUa2xBBdiP6NWGEvge93xHGU/t9m0wDQYJKoZIhvcNAQEL\n" \
"BQAwgYwxCzAJBgNVBAYTAkdCMQ8wDQYDVQQIDAZMb25kb24xDzANBgNVBAcMBkxv\n" \
"bmRvbjEYMBYGA1UECgwPR2xvYmFsIFNlY3VyaXR5MRYwFAYDVQQLDA1JVCBEZXBh\n" \
"cnRtZW50MSkwJwYDVQQDDCA0RDZEQzMwQjkwMjQ0NUZEOUQ3NTNBNENEQUVCNEMw\n" \
"NjAeFw0yMzEyMjAxMDU5MjBaFw0yNDEyMTkxMDU5MjBaMIGMMQswCQYDVQQGEwJH\n" \
"QjEPMA0GA1UECAwGTG9uZG9uMQ8wDQYDVQQHDAZMb25kb24xGDAWBgNVBAoMD0ds\n" \
"b2JhbCBTZWN1cml0eTEWMBQGA1UECwwNSVQgRGVwYXJ0bWVudDEpMCcGA1UEAwwg\n" \
"NEQ2REMzMEI5MDI0NDVGRDlENzUzQTRDREFFQjRDMDYwggEiMA0GCSqGSIb3DQEB\n" \
"AQUAA4IBDwAwggEKAoIBAQC0XTyh9DscsQFy0dkytEMmv+EJOk3UPeclADkNnelz\n" \
"He/dshPmAD/9gSuhjdsTbuJuSWqOf4h02T0DW+AQTkJo4pJ+cOOVsdbzCZTx8wyc\n" \
"gJk4LXLd6qrTP5yL57Q3uBJIHzAtCIntj5AcUqb0RgQ5YXEPb/Moicw2rddf44Mi\n" \
"21iLjPpbSfqvDM7vTh7rCwXmVUyaGB+B3/2z6swltQQiCJrO1/cfjB1XQnkyAaUa\n" \
"6EYslI8TfMRj8iqBqwr2Xzpw2cPmKCrn727Gm5d7XwNQOJbR3u/ZGyaxqOiise6l\n" \
"IczV29n8zOtNMqdXuJic9nxWqv6ECEAJ8k5cNVrJ5ZNHAgMBAAGjUzBRMB0GA1Ud\n" \
"DgQWBBQE1QUO20YEjsorlSOf2e832ncldzAfBgNVHSMEGDAWgBQE1QUO20YEjsor\n" \
"lSOf2e832ncldzAPBgNVHRMBAf8EBTADAQH/MA0GCSqGSIb3DQEBCwUAA4IBAQB4\n" \
"ARUxQQcNG09+XGQ1uT9VaNKjpQ7Qs1yoU3rFb6+Ktq4qOzlNjUsr6EHt4PBXqk8l\n" \
"hY4JHdrCbSSNghvro6hkTO9dY0GUbUwoWdqPPyS+SqatvuXMGhTzpq2RZx+S5g5o\n" \
"d4XEgDmqGwN1uY4QOq94P3Bh+ahzxFGg8GXon06hE9PfcqIWJCCN0xxLWeddXcdV\n" \
"Y5VmNyaKx1COqlPvU9dMoU8fJ4UIqmDyVPxxvMjULqQUJSZ34dbI9+j6kjoU/jPB\n" \
"Wb8FEEGQmiauDXjrtKx7jKc7IX1+qWw6TjJN3892JdZt+ZQgt6/m3COYEDlXZBJo\n" \
"uJgCgIbVHeprXkcBH8LU\n" \
"-----END CERTIFICATE-----\n"

#endif