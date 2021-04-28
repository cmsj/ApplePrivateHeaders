/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFShowContactCardCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFShowContactCardCommand <SFCommand>
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (assign,nonatomic) char isSuggestedContact; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(id)arg1;
-(NSData *)jsonData;
-(char)isSuggestedContact;
-(void)setIsSuggestedContact:(char)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFShowContactCardCommand : SFCommand <SFShowContactCardCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	char _isSuggestedContact;
	NSString* _contactIdentifier;

}

@property (nonatomic,copy) NSString * contactIdentifier;                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) char isSuggestedContact;                                //@synthesize isSuggestedContact=_isSuggestedContact - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(char)isSuggestedContact;
-(void)setIsSuggestedContact:(char)arg1 ;
-(char)hasIsSuggestedContact;
@end
