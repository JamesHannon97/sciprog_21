program loop
! Declare variables 
        integer (kind=4) :: i,n
        real (kind=4) :: integral_sum,a,b,delta

! Initialise 4-byte integer
        i = 1
        n = 12

! Initialise 4-byte float
        a = 0.0
        b = 4.D0*DATAN(1.D0)/3
        delta = (b-a)/(n-1)        

        integral_sum = tan(a) + tan(b)
        do i = 1,n-2,1
                integral_sum = integral_sum + 2 * tan(i * delta)
        end do
        integral_sum = integral_sum * (b-a) / (2 * n)
        write(6,*) 'Integral of tan(x) from 0 to pi/3 using trapezoidal rule and 11 equidistant points =',integral_sum
        write(6,*) 'log(2) =',log(2.0)
end program loop
