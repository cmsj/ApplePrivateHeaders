/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString;

@interface ISDQuickDirtyCoder : NSObject {

	NSMutableDictionary* _userInfo;
	id _data;
	const void* _bytes;
	NSMutableDictionary* _classVersionTable;
	NSMutableDictionary* _stringIndexTable;
	NSMutableArray* _strings;
	NSString* _path;
	char _isReading;
	id _delegate;
	id _recordid;
	NSString* _propertyName;

}
-(void)dealloc;
-(id)userInfo;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 ;
-(id)decodeObject;
-(const void*)decodeBytesWithReturnedLength:(unsigned short*)arg1 ;
-(char)finishEncoding;
-(void)finishDecoding;
-(void)encodeDouble:(double)arg1 ;
-(void)encodeString:(id)arg1 ;
-(void)encodeData:(id)arg1 ;
-(void)encodeColor:(id)arg1 ;
-(double)decodeDouble;
-(id)decodeString;
-(void)setRecordIdentifierForDelegate:(id)arg1 ;
-(long long)versionForClass:(Class)arg1 ;
-(unsigned)decodeUnsignedInt32;
-(unsigned long long)decodeUnsignedInt64;
-(void)encodeUnsignedInt32:(unsigned)arg1 ;
-(void)encodeUnsignedInt64:(unsigned long long)arg1 ;
-(id)initForReadingWithFile:(id)arg1 ;
-(id)initForWritingToFile:(id)arg1 ;
-(unsigned short)decodeUnsignedInt16;
-(void)setPropertyNameForDelegate:(id)arg1 ;
-(void)encodeUnsignedInt16:(unsigned short)arg1 ;
-(void)encodeArchiveHeader;
-(char)decodeArchiveHeader;
-(unsigned long long)addStringToStringTable:(id)arg1 ;
-(void)decodeStringTable:(unsigned long long)arg1 ;
-(void)decodeClassVersionTable:(unsigned long long)arg1 ;
-(void)encodeClassVersionTable;
-(void)encodeStringTable;
-(void)encodeUnsignedInt8:(unsigned char)arg1 ;
-(void)encodeSignedInt8:(char)arg1 ;
-(void)encodeSignedInt16:(short)arg1 ;
-(void)encodeSignedInt32:(int)arg1 ;
-(void)encodeSignedInt64:(long long)arg1 ;
-(unsigned char)decodeUnsignedInt8;
-(char)decodeSignedInt8;
-(short)decodeSignedInt16;
-(int)decodeSignedInt32;
-(long long)decodeSignedInt64;
-(id)decodeData;
-(unsigned long long)addClassToClassTable:(Class)arg1 ;
-(void)encodeNull;
-(void)encodeArray:(id)arg1 ;
-(void)encodeSet:(id)arg1 ;
-(void)encodeDictionary:(id)arg1 ;
-(void)encodeNumber:(id)arg1 ;
-(void)encodeDecimalNumber:(id)arg1 ;
-(void)encodeDate:(id)arg1 ;
-(void)encodeCalendarDate:(id)arg1 ;
-(void)encodeURL:(id)arg1 ;
-(void)encodeDataWrapper:(id)arg1 ;
-(void)encodePropertyValue:(id)arg1 ;
-(void)encodeRecordIdMap:(id)arg1 ;
-(void)encodeRecordIdMapper:(id)arg1 ;
-(void)encodeChange:(id)arg1 ;
-(void)encodeChangeDelta:(id)arg1 ;
-(void)encodeGlobalId:(id)arg1 ;
-(id)decodeNull;
-(id)decodeArray;
-(id)decodeSet;
-(id)decodeDictionary;
-(id)decodeNumber;
-(id)decodeDecimalNumber;
-(id)decodeDate;
-(id)decodeCalendarDate;
-(id)decodeURL;
-(id)decodeColor;
-(id)decodeDataWrapper;
-(id)decodePropertyValue;
-(id)decodeRecordIdMap;
-(id)decodeRecordIdMapper;
-(id)decodeChange;
-(id)decodeChangeDelta;
-(id)decodeGlobalId;
-(void)resetForWritingWithMutableData:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 ofLength:(unsigned short)arg2 ;
-(char)isNextObjectOfType:(int)arg1 ;
@end

