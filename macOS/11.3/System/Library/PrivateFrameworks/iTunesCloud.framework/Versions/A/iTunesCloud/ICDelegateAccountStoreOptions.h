/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _databasePath;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _serviceName;
	char _singleWriter;

}

@property (nonatomic,copy) NSString * databasePath;                                //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,getter=isSingleWriter,nonatomic) char singleWriter;              //@synthesize singleWriter=_singleWriter - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * XPCEndpoint;                  //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * XPCServiceName;                              //@synthesize serviceName=_serviceName - In the implementation block
+(char)supportsSecureCoding;
+(id)defaultOptionsWithServiceEndpoint:(id)arg1 ;
+(id)defaultOptionsWithServiceName:(id)arg1 ;
+(id)singleWriterOptionsWithDatabasePath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(NSString *)XPCServiceName;
-(char)isSingleWriter;
-(void)setSingleWriter:(char)arg1 ;
-(NSXPCListenerEndpoint *)XPCEndpoint;
-(void)setXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
@end

