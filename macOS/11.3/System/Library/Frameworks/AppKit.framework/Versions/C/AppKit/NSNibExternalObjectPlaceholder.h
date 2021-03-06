/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface NSNibExternalObjectPlaceholder : NSObject <NSCoding> {

	NSString* _externalObjectPlaceholderIdentifier;

}

@property (copy) NSString * externalObjectPlaceholderIdentifier;              //@synthesize externalObjectPlaceholderIdentifier=_externalObjectPlaceholderIdentifier - In the implementation block
+(void)removeMappingForCoder:(id)arg1 withIdentifier:(id)arg2 ;
+(void)addMappingFromIdentifier:(id)arg1 toEntry:(id)arg2 forCoder:(id)arg3 ;
+(id)mappedEntryForCoder:(id)arg1 withIdentifier:(id)arg2 ;
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(CFDictionaryRef)placeholderDecodingMap;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)externalObjectPlaceholderIdentifier;
-(void)setExternalObjectPlaceholderIdentifier:(NSString *)arg1 ;
@end

