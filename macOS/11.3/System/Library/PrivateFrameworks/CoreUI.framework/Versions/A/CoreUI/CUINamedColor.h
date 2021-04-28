/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup {

	CGColorRef _cgColor;
	NSString* _colorName;
	char _substituteWithSystemColor;

}

@property (nonatomic,readonly) CGColorRef cgColor; 
@property (nonatomic,readonly) char substituteWithSystemColor;              //@synthesize substituteWithSystemColor=_substituteWithSystemColor - In the implementation block
@property (nonatomic,readonly) NSString * systemColorName;                  //@synthesize colorName=_colorName - In the implementation block
-(void)dealloc;
-(CGColorRef)cgColor;
-(char)substituteWithSystemColor;
-(NSString *)systemColorName;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
@end
