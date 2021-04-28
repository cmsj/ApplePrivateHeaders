/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserReportRequest.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFUserReportRequest <NSObject>
@property (nonatomic,copy) NSString * affordanceText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * dismissText; 
@property (nonatomic,copy) NSArray * userReportOptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setTitle:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSData *)jsonData;
-(NSString *)affordanceText;
-(void)setAffordanceText:(id)arg1;
-(NSString *)dismissText;
-(void)setDismissText:(id)arg1;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying> {

	NSString* _affordanceText;
	NSString* _title;
	NSString* _dismissText;
	NSArray* _userReportOptions;

}

@property (nonatomic,copy) NSString * affordanceText;                                //@synthesize affordanceText=_affordanceText - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dismissText;                                   //@synthesize dismissText=_dismissText - In the implementation block
@property (nonatomic,copy) NSArray * userReportOptions;                              //@synthesize userReportOptions=_userReportOptions - In the implementation block
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
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)affordanceText;
-(void)setAffordanceText:(NSString *)arg1 ;
-(NSString *)dismissText;
-(void)setDismissText:(NSString *)arg1 ;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(NSArray *)arg1 ;
@end
