//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelBase.h"

@class MSArray;

@interface _MSShapePath : MSModelBase
{
    BOOL _isClosed;
    MSArray *_points;
}


- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (id)immutableModelObject;
- (void)initEmptyObject;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
@property(retain, nonatomic) MSArray *points; // @synthesize points=_points;
- (BOOL)primitiveIsClosed;
- (id)primitivePoints;
- (void)setAsParentOnChildren;
- (void)setPrimitiveIsClosed:(BOOL)arg1;
- (void)setPrimitivePoints:(id)arg1;

@end

