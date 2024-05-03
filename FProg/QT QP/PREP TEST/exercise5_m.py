def validate_cc(number):

    a=number//(10000000000000000)
    b=number%(10000000000000000)
    c=b//(1000000000000000)
    d=b%(1000000000000000)
    e=d//(100000000000000)
    f=d%(100000000000000)
    g=f//(10000000000000)
    h=f%(10000000000000)
    i=h//(1000000000000)
    j=h%(1000000000000)
    k=j//(100000000000)
    l=j%(100000000000)
    m=l//(10000000000)
    n=l%(10000000000)
    o=n//(1000000000)
    p=n%(1000000000)
    q=p//(100000000)
    r=p%(100000000)
    s=r//(10000000)
    t=r%(10000000)
    u=t//(1000000)
    v=t%(1000000)
    w=v//(100000)
    x=v%(100000)
    y=x//(10000)
    z=x%(10000)
    aa=z//(1000)
    ab=z%(1000)
    ac=ab//(100)
    ad=ab%(100)
    ae=ad//10
    af=ad%10
    ag=(2*c)//10
    ah=(2*c)%10
    ai=(2*g)//10
    aj=(2*g)%10
    ak=(2*k)//10
    al=(2*k)%10
    am=(2*o)//10
    an=(2*o)%10
    ao=(2*s)//10
    ap=(2*s)%10
    aq=(2*w)//10
    ar=(2*w)%10
    ass=(2*aa)//10
    at=(2*aa)%10
    aw=(2*ae)//10
    ax=(2*ae)%10
    computed_number=af+ax+aw+ac+at+ass+y+ar+aq+u+ap+ao+q+an+am+m+al+ak+i+aj+ai+e+ah+ag
    
    if computed_number%10==0:
        return (f"Card number {number} valid")
    else:
        return (f"Card number {number} invalid (checksum {computed_number%10})")
