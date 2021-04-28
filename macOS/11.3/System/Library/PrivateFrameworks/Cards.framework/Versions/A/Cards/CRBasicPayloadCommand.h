/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Versions/A/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@protocol NSSecureCodingNSCopying;
@class NSDictionary, NSString;

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand> {

	id<NSSecureCoding><NSCopying> payload;
	NSDictionary* userInfo;
	unsigned long long commandDirection;

}

@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)handleForCardViewController:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setPayload:(id<NSSecureCoding><NSCopying>)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
@end
