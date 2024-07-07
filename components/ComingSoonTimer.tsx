"use client";

import React, { useState, useEffect } from 'react';

export default function ComingSoonTimer({ targetDate }: { targetDate: Date }) {
    const [remainingTime, setRemainingTime] = useState(getRemainingTime());

    useEffect(() => {
        const interval = setInterval(() => {
            setRemainingTime(getRemainingTime());
        }, 1000);

        return () => clearInterval(interval);
    });

    function getRemainingTime() {
        const now = new Date();
        const timeDifference = targetDate.getTime() - now.getTime();
        
        // Timer has expired
        if (timeDifference <= 0) {
            return { days: 0, hours: 0, minutes: 0, seconds: 0 };
        }
        const days = Math.floor(timeDifference / (1000 * 60 * 60 * 24));
        const hours = Math.floor((timeDifference % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
        const minutes = Math.floor((timeDifference % (1000 * 60 * 60)) / (1000 * 60));
        const seconds = Math.floor((timeDifference % (1000 * 60)) / 1000);
        return { days, hours, minutes, seconds };
    }

    return (
        <div className="text-center p-4">
        <p className="text-xl font-semibold">Coming Soon</p>
        <div className="text-lg">
            <span className="font-semibold">{remainingTime.days}</span> days{' '}
            <span className="font-semibold">{remainingTime.hours}</span> hours{' '}
            <span className="font-semibold">{remainingTime.minutes}</span> minutes{' '}
            <span className="font-semibold">{remainingTime.seconds}</span> seconds
        </div>
        </div>
    );
};
