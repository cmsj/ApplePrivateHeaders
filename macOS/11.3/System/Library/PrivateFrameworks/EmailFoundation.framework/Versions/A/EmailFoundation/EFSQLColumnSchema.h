/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EFSQLTableSchema, NSString, EFSQLColumnExpression;

@interface EFSQLColumnSchema : NSObject {

	EFSQLTableSchema* _table;
	char _nullable;
	char _isPrimaryKey;
	char _isAutoincrementing;
	NSString* _name;
	unsigned long long _type;
	EFSQLTableSchema* _foreignKeyTarget;
	EFSQLTableSchema* _associatedTable;
	unsigned long long _collation;
	id _defaultValue;
	NSString* _foreignKeyTargetString;
	unsigned long long _foreignKeyDeleteAction;
	unsigned long long _foreignKeyUpdateAction;

}

@property (nonatomic,readonly) unsigned long long collation;                                      //@synthesize collation=_collation - In the implementation block
@property (nonatomic,readonly) char isPrimaryKey;                                                 //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) char isAutoincrementing;                                           //@synthesize isAutoincrementing=_isAutoincrementing - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetString;                                     //@synthesize foreignKeyTargetString=_foreignKeyTargetString - In the implementation block
@property (assign,nonatomic,__weak) EFSQLTableSchema * foreignKeyTarget;                          //@synthesize foreignKeyTarget=_foreignKeyTarget - In the implementation block
@property (assign,nonatomic) unsigned long long foreignKeyDeleteAction;                           //@synthesize foreignKeyDeleteAction=_foreignKeyDeleteAction - In the implementation block
@property (assign,nonatomic) unsigned long long foreignKeyUpdateAction;                           //@synthesize foreignKeyUpdateAction=_foreignKeyUpdateAction - In the implementation block
@property (assign,nonatomic,__weak) EFSQLTableSchema * associatedTable;                           //@synthesize associatedTable=_associatedTable - In the implementation block
@property (nonatomic,__weak,readonly) EFSQLTableSchema * table; 
@property (nonatomic,copy,readonly) NSString * definition; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char nullable;                                                     //@synthesize nullable=_nullable - In the implementation block
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpressionWithFullName; 
+(id)integerColumnWithName:(id)arg1 nullable:(char)arg2 defaultValue:(id)arg3 ;
+(id)realColumnWithName:(id)arg1 nullable:(char)arg2 defaultValue:(id)arg3 ;
+(id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(char)arg3 defaultValue:(id)arg4 ;
+(id)stringForColumnType:(unsigned long long)arg1 ;
+(unsigned long long)columnTypeForString:(id)arg1 ;
+(id)integerColumnWithName:(id)arg1 nullable:(char)arg2 ;
+(id)realColumnWithName:(id)arg1 nullable:(char)arg2 ;
+(id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(char)arg3 ;
+(id)blobColumnWithName:(id)arg1 nullable:(char)arg2 ;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(unsigned long long)type;
-(id)defaultValue;
-(EFSQLTableSchema *)table;
-(NSString *)definition;
-(unsigned long long)collation;
-(void)setTable:(EFSQLTableSchema *)arg1 ;
-(EFSQLColumnExpression *)columnExpression;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 collation:(unsigned long long)arg3 nullable:(char)arg4 defaultValue:(id)arg5 ;
-(id)initWithName:(id)arg1 isPrimaryKey:(char)arg2 isAutoincrementing:(char)arg3 type:(unsigned long long)arg4 collation:(unsigned long long)arg5 nullable:(char)arg6 defaultValue:(id)arg7 ;
-(char)isPrimaryKey;
-(char)isAutoincrementing;
-(char)nullable;
-(NSString *)foreignKeyTargetString;
-(EFSQLTableSchema *)foreignKeyTarget;
-(unsigned long long)foreignKeyDeleteAction;
-(id)_stringForForeignKeyAction:(unsigned long long)arg1 ;
-(unsigned long long)foreignKeyUpdateAction;
-(id)fullNameWithDatabaseName:(id)arg1 ;
-(EFSQLTableSchema *)associatedTable;
-(void)setForeignKeyTarget:(EFSQLTableSchema *)arg1 ;
-(void)setForeignKeyDeleteAction:(unsigned long long)arg1 ;
-(void)setForeignKeyUpdateAction:(unsigned long long)arg1 ;
-(void)setForeignKeyTargetString:(NSString *)arg1 ;
-(void)setAssociatedTable:(EFSQLTableSchema *)arg1 ;
-(id)initRowIDWithAlias:(id)arg1 isAutoincrementing:(char)arg2 ;
-(void)setAsForeignKeyForTable:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3 ;
-(void)setAsForeignKeyForString:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3 ;
-(void)associateWithTable:(id)arg1 ;
-(EFSQLColumnExpression *)columnExpressionWithFullName;
@end
