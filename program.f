        program mlock_example

        integer, external :: mlock
        integer, allocatable :: arr(:)
        integer err

        allocate (arr(1000))

        err = mlock(arr, sizeof(arr))
        if (err .ne. 0) then
                print*, "mlock failed!"
        else
                print*, "mlock success!"
        endif
        
        end
