/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */

#include <stdlib.h>
/*
const char *iotx_ca_crt = \
{
    \
    "-----BEGIN CERTIFICATE-----\r\n"
    "MIIDdTCCAl2gAwIBAgILBAAAAAABFUtaw5QwDQYJKoZIhvcNAQEFBQAwVzELMAkG\r\n" \
    "A1UEBhMCQkUxGTAXBgNVBAoTEEdsb2JhbFNpZ24gbnYtc2ExEDAOBgNVBAsTB1Jv\r\n" \
    "b3QgQ0ExGzAZBgNVBAMTEkdsb2JhbFNpZ24gUm9vdCBDQTAeFw05ODA5MDExMjAw\r\n" \
    "MDBaFw0yODAxMjgxMjAwMDBaMFcxCzAJBgNVBAYTAkJFMRkwFwYDVQQKExBHbG9i\r\n" \
    "YWxTaWduIG52LXNhMRAwDgYDVQQLEwdSb290IENBMRswGQYDVQQDExJHbG9iYWxT\r\n" \
    "aWduIFJvb3QgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDaDuaZ\r\n" \
    "jc6j40+Kfvvxi4Mla+pIH/EqsLmVEQS98GPR4mdmzxzdzxtIK+6NiY6arymAZavp\r\n" \
    "xy0Sy6scTHAHoT0KMM0VjU/43dSMUBUc71DuxC73/OlS8pF94G3VNTCOXkNz8kHp\r\n" \
    "1Wrjsok6Vjk4bwY8iGlbKk3Fp1S4bInMm/k8yuX9ifUSPJJ4ltbcdG6TRGHRjcdG\r\n" \
    "snUOhugZitVtbNV4FpWi6cgKOOvyJBNPc1STE4U6G7weNLWLBYy5d4ux2x8gkasJ\r\n" \
    "U26Qzns3dLlwR5EiUWMWea6xrkEmCMgZK9FGqkjWZCrXgzT/LCrBbBlDSgeF59N8\r\n" \
    "9iFo7+ryUp9/k5DPAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8E\r\n" \
    "BTADAQH/MB0GA1UdDgQWBBRge2YaRQ2XyolQL30EzTSo//z9SzANBgkqhkiG9w0B\r\n" \
    "AQUFAAOCAQEA1nPnfE920I2/7LqivjTFKDK1fPxsnCwrvQmeU79rXqoRSLblCKOz\r\n" \
    "yj1hTdNGCbM+w6DjY1Ub8rrvrTnhQ7k4o+YviiY776BQVvnGCv04zcQLcFGUl5gE\r\n" \
    "38NflNUVyRRBnMRddWQVDf9VMOyGj/8N7yy5Y0b2qvzfvGn9LhJIZJrglfCm7ymP\r\n" \
    "AbEVtQwdpf5pLGkkeB6zpxxxYu7KyJesF12KwvhHhm4qxFYxldBniYUr+WymXUad\r\n" \
    "DKqC5JlR3XC321Y9YeRq4VzW9v493kHMB65jUr9TU/Qr6cf9tveCX4XSQRjbgbME\r\n" \
    "HMUfpIBvFSDJ3gyICh3WZlXi/EjJKSZp4A==\r\n" \
    "-----END CERTIFICATE-----"
};
*/
const char *iotx_ca_crt = \
{
    \
  "-----BEGIN CERTIFICATE-----\r\n"
"MIIEWjCCA0KgAwIBAgIJANuVoKZVs0PzMA0GCSqGSIb3DQEBDQUAMIGLMQswCQYD\r\n" \
"VQQGEwJDTjESMBAGA1UECAwJR3VhbmdEb25nMREwDwYDVQQHDAhTaGVuWmhlbjET\r\n" \
"MBEGA1UECgwKRXZlcmdyYW5kZTELMAkGA1UECwwCeGwxDzANBgNVBAMMBnhsLmNv\r\n" \
"bTEiMCAGCSqGSIb3DQEJARYTaW5mb0BldmVyZ3JhbmRlLmNvbTAeFw0yMDExMTEw\r\n" \
"MTIwMjRaFw00MDExMDYwMTIwMjRaMIGLMQswCQYDVQQGEwJDTjESMBAGA1UECAwJ\r\n" \
"R3VhbmdEb25nMREwDwYDVQQHDAhTaGVuWmhlbjETMBEGA1UECgwKRXZlcmdyYW5k\r\n" \
"ZTELMAkGA1UECwwCeGwxDzANBgNVBAMMBnhsLmNvbTEiMCAGCSqGSIb3DQEJARYT\r\n" \
"aW5mb0BldmVyZ3JhbmRlLmNvbTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoC\r\n" \
"ggEBAOOnIP1ITfmix5UQb3Letv6VHyioct/iW5bmgS/kqkt5ngvgaUF5Vj71Be+b\r\n" \
"87ISkdTixdNrnhytT2zJmdjINqXFn8xTRjHig0ObzMT2WqSeTgg39VqXHgJJeCwP\r\n" \
"qKdAdjymNwsJqsHedIb6rnQx6m/pJMaBxtIECpB6CsI+AZl767KvoNfETOdJWLy3\r\n" \
"ppYUwx4piXNGM8Wa2pl+Hdm0uo9t13Xam+FlfquFv3pnkpi+uyoMRxlJvYqAh/U3\r\n" \
"w5KNmGbanlxP+ypjpeSo2h9hFyl8qMXW+MrYxq43F1Nocf0IHLwL6I5Ikp+iCQ/V\r\n" \
"z569Jy+3JqOM5bql5rf0dizU7UcCAwEAAaOBvjCBuzCBqgYDVR0jBIGiMIGfoYGR\r\n" \
"pIGOMIGLMQswCQYDVQQGEwJDTjESMBAGA1UECAwJR3VhbmdEb25nMREwDwYDVQQH\r\n" \
"DAhTaGVuWmhlbjETMBEGA1UECgwKRXZlcmdyYW5kZTELMAkGA1UECwwCeGwxDzAN\r\n" \
"BgNVBAMMBnhsLmNvbTEiMCAGCSqGSIb3DQEJARYTaW5mb0BldmVyZ3JhbmRlLmNv\r\n" \
"bYIJANuVoKZVs0PzMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQENBQADggEBAH4f\r\n" \
"4zzOTcOcWCp5a1wtSqX2elwPCWF0BYTlMtQbuuz63QGNz3817hvzxlNuBi4/PzpP\r\n" \
"IkZi9tqmASGvNONxHggxXu+NwtPDBzSROfwz5+oKibbMwBapqBI+7JSUuHpL5fS2\r\n" \
"Q/GcsPkDRzwLMMBoorwLXkDb7zz4w+bN69DSmH6CPKY3IGYjkQ7q4ak8+Crv+L2i\r\n" \
"1mGpTjTp587icFpp8l5o1Ln55fkIFR+XZUNJQyW9VZ8ASj1/sOVzLbgF/zb9vuk2\r\n" \
"h//ODa8PUaAMWC6/VVRXZpQuTpfr1SUOSe5tU5fo6ACqx+hxHJxAAQRXKkEszwxR\r\n" \
"mm35sez5oShRWOczlBY=\r\n" \
"-----END CERTIFICATE-----"
};