program tan_function
  implicit none
  integer (kind=4) :: i, N=12
  real (kind=4) :: deg, rad, tan_array(13), trapezoidal_area
  do i=0, N, 1
    deg = 5 * i
    call degtorad(deg,rad)
    tan_array(i) = tan(rad)
    write(6,*) 'tan(',rad,') = ',tan_array(i)
  end do
  call area(N,trapezoidal_area)
  stop
end program tan_function

subroutine degtorad(arg,arg2)
  real (kind=4), intent(in) :: arg
  real (kind=4), intent(out) :: arg2
  real (kind=4) :: pi=ATAN(1.0)*4
  arg2=(pi*arg)/180.0
end subroutine degtorad

subroutine area(arg,arg2)
  integer (kind=4), intent(in) :: arg
  real (kind=4), intent(out) :: arg2
  real (kind=4) :: a=0.0, b_deg=60.0, b_rad, delta
  call degtorad(b_deg, b_rad)
  delta = (b_rad-a)/arg
  arg2 = tan(a) + tan(b_rad)
  do i = 1, arg-1, 1
    arg2 = arg2 + 2 * tan(delta * i)
  end do
  arg2 = arg2 * (b_rad - a)/(2*arg)
  write(6,*) 'Integral of tan(x) from 0 to pi/3 using trapezoidal rule =',arg2
end subroutine area

