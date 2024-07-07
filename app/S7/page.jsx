import ComingSoonTimer from '@components/ComingSoonTimer';
import React from 'react'

export default function page() {
    const date = new Date('2024-12-01T00:00:00Z')

    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 7</div>
            <ComingSoonTimer className="text-center" targetDate={date}/>
        </div>
    )
}
