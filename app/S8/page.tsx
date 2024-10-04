import ComingSoonTimer from "@/components/ComingSoonTimer";
import React from 'react'

export default function page() {
    const date = new Date('2025-04-01T00:00:00Z')

    return (
        <div className='flex-center text-xl text-center'>
            <div className='text-center underline'>Semester 8</div>
            <ComingSoonTimer targetDate={date} />
        </div>
    )
}
