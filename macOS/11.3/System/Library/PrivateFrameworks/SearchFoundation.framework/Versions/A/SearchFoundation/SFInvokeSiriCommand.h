/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFInvokeSiriCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFInvokeSiriCommand <SFCommand>
@property (nonatomic,copy) NSString * utteranceText; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setUtteranceText:(id)arg1;
-(NSString *)utteranceText;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFInvokeSiriCommand : SFCommand <SFInvokeSiriCommand, NSSecureCoding, NSCopying> {

	NSString* _utteranceText;

}

@property (nonatomic,copy) NSString * utteranceText;                                 //@synthesize utteranceText=_utteranceText - In the implementation block
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
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setUtteranceText:(NSString *)arg1 ;
-(NSString *)utteranceText;
@end

