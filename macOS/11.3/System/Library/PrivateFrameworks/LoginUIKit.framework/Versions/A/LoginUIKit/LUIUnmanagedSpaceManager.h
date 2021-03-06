/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject {

	NSMutableDictionary* _unmanagedSpaces;

}

@property (retain) NSMutableDictionary * unmanagedSpaces;              //@synthesize unmanagedSpaces=_unmanagedSpaces - In the implementation block
+(id)sharedUnmanagedSpaceManager;
-(id)unmanagedSpaceForLevel:(int)arg1 ;
-(NSMutableDictionary *)unmanagedSpaces;
-(void)setUnmanagedSpaces:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
@end

