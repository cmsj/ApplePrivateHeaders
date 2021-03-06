/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MXAuRAObjectPayload;

@interface MXAudioObjectDescription : NSObject {

	MXAuRAObjectPayload* mObject;
	unsigned mClassID;
	unsigned long long mObjectID;

}

@property (readonly) MXAuRAObjectPayload * object; 
@property (readonly) unsigned classID; 
@property (readonly) unsigned long long objectID; 
-(void)dealloc;
-(id)description;
-(id)init;
-(MXAuRAObjectPayload *)object;
-(unsigned long long)objectID;
-(unsigned)classID;
@end

