"use client"
import ComingSoonTimer from '@components/comingsoon';

const page = () => {
    const date = new Date('2025-02-01T00:00:00Z');

    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 8</div>
            <ComingSoonTimer className="text-center" targetDate={date}/>
        </div>
    )
}

export default page;