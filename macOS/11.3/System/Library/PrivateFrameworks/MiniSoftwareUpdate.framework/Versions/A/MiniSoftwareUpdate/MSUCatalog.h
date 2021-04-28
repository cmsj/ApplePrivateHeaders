/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MiniSoftwareUpdate.framework/Versions/A/MiniSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURL, NSArray, NSDate, NSString;

@interface MSUCatalog : NSObject <NSURLSessionDelegate> {

	NSURL* _URL;
	unsigned long long _options;
	long long _version;
	NSArray* _products;
	NSDate* _loadDate;
	NSString* _testMode;

}

@property (retain) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (assign) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (retain) NSDate * loadDate;                               //@synthesize loadDate=_loadDate - In the implementation block
@property (assign) long long version;                               //@synthesize version=_version - In the implementation block
@property (retain) NSArray * products;                              //@synthesize products=_products - In the implementation block
@property (copy,readonly) NSString * testMode;                      //@synthesize testMode=_testMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_validateDictionary:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithLocalProductsDirectoryURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithXMLData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)_parseFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_synthesizedCatalogDictionaryFromLocalDirectoryURL:(id)arg1 options:(unsigned long long)arg2 ;
-(NSString *)description;
-(NSURL *)URL;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(long long)version;
-(void)setURL:(NSURL *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(NSString *)testMode;
-(NSArray *)products;
-(NSDate *)loadDate;
-(void)setLoadDate:(NSDate *)arg1 ;
-(void)setProducts:(NSArray *)arg1 ;
@end
