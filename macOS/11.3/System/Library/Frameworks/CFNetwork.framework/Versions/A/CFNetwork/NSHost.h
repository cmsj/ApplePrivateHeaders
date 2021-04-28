/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(char)isHostCacheEnabled;
+(void)setHostCacheEnabled:(char)arg1 ;
+(void)flushHostCache;
+(id)hostWithName:(id)arg1 ;
+(id)currentHost;
+(id)hostWithAddress:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSString *)localizedName;
-(NSArray *)addresses;
-(NSString *)address;
-(id)_thingToResolve;
-(NSArray *)names;
-(char)isEqualToHost:(id)arg1 ;
@end
