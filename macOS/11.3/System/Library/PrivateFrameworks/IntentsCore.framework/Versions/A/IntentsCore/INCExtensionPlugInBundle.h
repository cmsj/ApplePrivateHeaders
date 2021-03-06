/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/Versions/A/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface INCExtensionPlugInBundle : NSObject {

	Class _principalClass;
	NSSet* _intentsSupported;
	NSSet* _intentsRestrictedWhileLocked;

}

@property (nonatomic,readonly) Class principalClass;                                   //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsSupported;                          //@synthesize intentsSupported=_intentsSupported - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsRestrictedWhileLocked;              //@synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked - In the implementation block
-(NSSet *)intentsRestrictedWhileLocked;
-(Class)principalClass;
-(id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3 ;
-(NSSet *)intentsSupported;
@end

