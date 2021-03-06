/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SidecarUI.framework/Versions/A/SidecarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarUI/SidecarUI-Structs.h>
#import <AppKit/NSMenu.h>

@class NSArray;

@interface SidecarSubmenu : NSMenu {

	long long _generation;
	unsigned long long _options;
	NSArray* _services;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * services;              //@synthesize services=_services - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(NSArray *)services;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)update;
-(void)setAction:(SEL)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
@end

