/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CWANQPVenueNameEntry : NSObject <NSSecureCoding, NSCopying> {

	NSString* _languageCode;
	NSString* _name;

}

@property (nonatomic,copy) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithVenueName:(id)arg1 languageCode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

