/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioDSPManager/AudioDSPManager-Structs.h>
@class NSString;

@interface DSPModuleBasicDescription : NSObject {

	NSString* _type;
	unsigned long long _scope;
	unsigned long long _ioControllerID;
	optional<unsigned int> _ioStreamIndex;

}

@property (nonatomic,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) unsigned long long ioControllerID;                 //@synthesize ioControllerID=_ioControllerID - In the implementation block
@property (nonatomic,readonly) optional<unsigned int> ioStreamIndex;              //@synthesize ioStreamIndex=_ioStreamIndex - In the implementation block
-(NSString *)type;
-(unsigned long long)scope;
-(id)initWithType:(id)arg1 scope:(unsigned long long)arg2 ioControllerID:(unsigned long long)arg3 ioStreamIndex:(optional<unsigned int>)arg4 ;
-(unsigned long long)ioControllerID;
-(optional<unsigned int>)ioStreamIndex;
@end

