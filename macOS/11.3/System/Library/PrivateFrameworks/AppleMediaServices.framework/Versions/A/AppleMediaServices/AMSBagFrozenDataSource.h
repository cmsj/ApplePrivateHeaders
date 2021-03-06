/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, AMSProcessInfo, NSString, AMSBagKeySet, NSArray, NSDictionary;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;
	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;

}

@property (readonly) AMSBagKeySet * bagKeySet;                       //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (readonly) NSArray * cookies;                              //@synthesize cookies=_cookies - In the implementation block
@property (readonly) NSDictionary * data;                            //@synthesize data=_data - In the implementation block
@property (readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isLoaded,readonly) char loaded; 
@property (copy,readonly) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
@property (copy,readonly) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (copy,readonly) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
@property (retain) NSString * descriptionExtended; 
@property (copy) id dataSourceChangedHandler; 
@property (copy) id dataSourceDataInvalidatedHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSDictionary *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSProcessInfo *)processInfo;
-(char)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(NSArray *)cookies;
-(NSString *)profileVersion;
-(AMSBagKeySet *)bagKeySet;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2 ;
-(id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 processInfo:(id)arg7 ;
@end

