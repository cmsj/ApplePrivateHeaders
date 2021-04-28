/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface CNCDDatabasePreparationResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPristineDatabase;
	BOOL _didMigrate;
	NSURL* _url;
	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL isPristineDatabase;                  //@synthesize isPristineDatabase=_isPristineDatabase - In the implementation block
@property (nonatomic,readonly) BOOL didMigrate;                          //@synthesize didMigrate=_didMigrate - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(NSURL *)url;
-(BOOL)isPristineDatabase;
-(BOOL)didMigrate;
-(id)initWithURL:(id)arg1 options:(id)arg2 isPristineDatabase:(char)arg3 didMigrate:(char)arg4 ;
@end
