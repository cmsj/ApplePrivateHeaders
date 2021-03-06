/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSColor, NSString, NSData;

@interface NSFavoriteColorStoreEntry : NSObject <NSCopying> {

	NSColor* _color;
	NSString* _customColorClassName;
	NSData* _customColorData;

}

@property (readonly) NSColor * color;                                   //@synthesize color=_color - In the implementation block
@property (copy,readonly) NSString * customColorClassName;              //@synthesize customColorClassName=_customColorClassName - In the implementation block
@property (copy,readonly) NSData * customColorData;                     //@synthesize customColorData=_customColorData - In the implementation block
+(id)entryWithColor:(id)arg1 ;
+(id)customEntryWithColorClassName:(id)arg1 data:(id)arg2 backstopColor:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSColor *)color;
-(id)initWithColor:(id)arg1 customClassName:(id)arg2 customColorData:(id)arg3 ;
-(NSString *)customColorClassName;
-(NSData *)customColorData;
@end

