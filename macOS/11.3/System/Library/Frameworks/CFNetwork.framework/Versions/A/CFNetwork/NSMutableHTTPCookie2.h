/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSHTTPCookie2.h>

@class NSString, NSDate;

@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString * name; 
@property (retain) NSString * value; 
@property (retain) NSString * domain; 
@property (retain) NSString * path; 
@property (retain) NSDate * expirationDate; 
@property (assign) char secure; 
@property (assign) char httpOnly; 
@property (assign) char hostOnly; 
@property (retain) NSString * partition; 
@property (assign) long long source; 
@property (assign) long long sameSite; 
-(void)setHostOnly:(char)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(void)setSecure:(char)arg1 ;
-(void)setHttpOnly:(char)arg1 ;
-(void)setSameSite:(long long)arg1 ;
@end

