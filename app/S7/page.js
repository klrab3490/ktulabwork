import ComingSoonTimer from '@components/comingsoon';
import React from 'react'

const page = () => {
    const date = new Date('2024-08-01T00:00:00Z')

    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 7</div>
            <ComingSoonTimer className="text-center" targetDate={date}/>

        </div>
    )
}

export default page;