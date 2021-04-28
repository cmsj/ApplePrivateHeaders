/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UXWindowState : NSObject {

	unsigned long long _styleMask;
	unsigned long long _collectionBehavior;

}

@property (readonly) unsigned long long styleMask;                       //@synthesize styleMask=_styleMask - In the implementation block
@property (readonly) unsigned long long collectionBehavior;              //@synthesize collectionBehavior=_collectionBehavior - In the implementation block
+(id)windowStateWithStyleMask:(unsigned long long)arg1 collectionBehavior:(unsigned long long)arg2 ;
-(unsigned long long)styleMask;
-(unsigned long long)collectionBehavior;
-(void)applyToWindow:(id)arg1 ;
@end
