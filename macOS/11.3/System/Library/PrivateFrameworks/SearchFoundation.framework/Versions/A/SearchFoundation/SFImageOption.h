/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImageOption.h>
@class NSString, NSDictionary, NSData;


@protocol SFImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,copy) NSDictionary * options; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(void)setOptions:(id)arg1;
-(NSDictionary *)options;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)defaultValue;
-(void)setDefaultValue:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFImageOption : NSObject <SFImageOption, NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _defaultValue;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
@end

