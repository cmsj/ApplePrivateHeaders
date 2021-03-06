/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
	long long field5;
	long long field6;
	long long field7;
	long long field8;
	long long field9;
} SCD_Struct_GK4;

typedef struct {
	unsigned _platform_unused : 8;
	unsigned _prerendered : 1;
	unsigned _supportsLeaderboards : 1;
	unsigned _supportsLeaderboardSets : 1;
	unsigned _hasAggregateLeaderboard : 1;
	unsigned _supportsAchievements : 1;
	unsigned _supportsMultiplayer : 1;
	unsigned _valid : 1;
	unsigned _unused : 1;
	unsigned _supportsTurnBasedMultiplayer : 1;
	unsigned _isArcadeGame : 1;
	unsigned _supportsChallenges : 1;
	unsigned _reserved : 13;
} SCD_Struct_GK5;

typedef union {
	SCD_Struct_GK5 field1;
	unsigned _value;
} SCD_Union_GK6;

typedef struct {
	unsigned _unused : 8;
	unsigned _purpleBuddyAccount : 1;
	unsigned _underage : 1;
	unsigned _photoPending : 1;
	unsigned _findable : 1;
	unsigned _defaultNickname : 1;
	unsigned _defaultPrivacyVisibility : 1;
	unsigned _reserved : 18;
} SCD_Struct_GK7;

typedef union {
	SCD_Struct_GK7 field1;
	unsigned _value;
} SCD_Union_GK8;

typedef struct {
	unsigned _maximumPoints : 16;
	unsigned _hidden : 1;
	unsigned _replayable : 1;
	unsigned _reserved : 14;
} SCD_Struct_GK9;

typedef union {
	SCD_Struct_GK9 field1;
	unsigned _value;
} SCD_Union_GK10;

