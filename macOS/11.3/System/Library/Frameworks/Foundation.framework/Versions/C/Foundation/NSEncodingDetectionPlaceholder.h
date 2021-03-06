/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {

	unsigned long long nsEncoding;
	unsigned cfEncoding;
	NSString* string;
	char* bytes;
	unsigned long long bytesLength;
	char* bytesStart;

}

@property (readonly) unsigned long long nsEncoding; 
@property (readonly) unsigned cfEncoding; 
@property (readonly) NSString * string; 
@property (readonly) char* bytes; 
@property (readonly) unsigned long long bytesLength; 
+(id)placeholderForDetector:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)string;
-(char*)bytes;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(unsigned long long)bytesLength;
@end

