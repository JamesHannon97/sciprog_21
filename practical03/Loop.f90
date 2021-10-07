program loop
implicit none
! Declare variables 
        integer (kind=4) :: i,n
        real (kind=4) :: integral,a,b,delta

! Initialise 4-byte integer
        i = 1
        n = 12

! Initialise 4-byte float
        a = 0.0
        b = 4.D0*DATAN(1.D0)/3
        delta = (b-a)/n        

        integral = tan(a) + tan(b)
        do i = 1,n-1,1
                integral = integral + 2 * tan(i * delta)
        end do
        integral = integral * (b-a) / (2 * n)
        write(6,*) 'Integral of tan(x) from 0 to pi/3 using trapezoidal rule and ',n-1,' equidistant points =',integral
        write(6,*) 'log(2) =',log(2.0)
stop 
end program loop
