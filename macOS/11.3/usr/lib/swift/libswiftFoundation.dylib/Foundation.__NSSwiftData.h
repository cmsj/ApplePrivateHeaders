/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/swift/libswiftFoundation.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface Foundation.__NSSwiftData : NSData {

	 _backing;
	 _range;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) void* bytes; 
-(id)copyWithZone:(void*)arg1 ;
-(id)init;
-(id)initWithBytes:(void*)arg1 length:(long long)arg2 ;
-(long long)length;
-(void*)bytes;
-(char)_isCompact;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(char)_providesConcreteBacking;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
@end
