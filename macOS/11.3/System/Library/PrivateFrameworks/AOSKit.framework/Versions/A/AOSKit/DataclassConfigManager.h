/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AOSKit/AOSKit-Structs.h>
@class NSMutableDictionary;

@interface DataclassConfigManager : NSObject {

	NSMutableDictionary* _info;
	long long _actionCount;

}
+(id)sharedManager;
-(id)performAction:(long long)arg1 forDataclass:(id)arg2 andAccount:(AOSAccountRef)arg3 withInfo:(id)arg4 ;
-(char)_isLatestActionWithInfo:(id)arg1 andClientTimestamp:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
@end

