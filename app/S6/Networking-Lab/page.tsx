import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>
                <Link href={"/S6/Networking-Lab"}>Semester 6</Link>
            </div>
            <div className='text-center underline py-4'>Networking Lab</div>
            <ul>
                <li><Link href={"/S6/Networking-Lab/Exp3"}> Experiment 3. TCP </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp4"}> Experiment 4. UDP </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp5"}> Experiment 5. Sliding Window Flow Control </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp6"}> Experiment 6. Link State Routing </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp7"}> Experiment 7. File Transfer Protocol </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp8"}> Experiment 8. Leaky Bucket Algorithm </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp9"}> Experiment 9. Wireshark </Link> </li>
                <li><Link href={"/S6/Networking-Lab/Exp10"}> Experiment 10. Simulation of CSMA using NS2 </Link> </li>
            </ul>
        </div>
    )
}
