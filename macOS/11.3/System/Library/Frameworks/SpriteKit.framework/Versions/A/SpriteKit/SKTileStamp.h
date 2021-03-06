/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKTileStamp : NSObject <NSSecureCoding> {

	unsigned _columns;
	unsigned _rows;
	unsigned* _tileData;

}

@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) unsigned* tileData; 
+(char)supportsSecureCoding;
+(id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(char)isEqualToNode:(id)arg1 ;
-(unsigned*)tileData;
-(void)setTileData:(unsigned*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(id)tileDefinitionsForTileMap:(id)arg1 ;
@end

