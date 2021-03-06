/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKExtendedAttributeEnumerator : NSObject {

	NSString* _path;
	char* _nameBuffer;
	long long _nameBufferSize;
	char* _currentName;
	long long _currentByteOffset;
	int _options;

}
-(id)_dataForAttributeName:(char*)arg1 ;
-(id)initWithFileAtPath:(id)arg1 options:(int)arg2 ;
-(id)nextAttribute;
-(void)rewindToBeginning;
-(void)dealloc;
@end

