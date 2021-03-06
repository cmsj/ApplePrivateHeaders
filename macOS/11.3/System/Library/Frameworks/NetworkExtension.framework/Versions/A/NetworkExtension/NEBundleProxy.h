/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface NEBundleProxy : NSObject <NSSecureCoding> {

	char _isWatchKitApp;
	NSString* _identifier;
	NSURL* _url;
	NSArray* _machOUUIDs;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSArray * machOUUIDs;               //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char isWatchKitApp;                          //@synthesize isWatchKitApp=_isWatchKitApp - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 machOUUIDs:(id)arg3 name:(id)arg4 ;
-(void)setIsWatchKitApp:(char)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)machOUUIDs;
-(char)isWatchKitApp;
-(NSURL *)url;
@end

