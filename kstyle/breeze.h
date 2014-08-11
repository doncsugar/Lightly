#ifndef breeze_h
#define breeze_h

/*
* breeze.h
* all enumerations
* -------------------
*
* Copyright (c) 2012 Hugo Pereira Da Costa <hugo.pereira@free.fr>
*
* Largely inspired from Qtcurve style
* Copyright (C) Craig Drummond, 2003 - 2010 craig.p.drummond@gmail.com
*
* This  library is free  software; you can  redistribute it and/or
* modify it  under  the terms  of the  GNU Lesser  General  Public
* License  as published  by the Free  Software  Foundation; either
* version 2 of the License, or( at your option ) any later version.
*
* This library is distributed  in the hope that it will be useful,
* but  WITHOUT ANY WARRANTY; without even  the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License  along  with  this library;  if not,  write to  the Free
* Software Foundation, Inc., 51  Franklin St, Fifth Floor, Boston,
* MA 02110-1301, USA.
*/

#include "QtCore/QFlags"

namespace Breeze
{

    //! metrics
    /*! these are copied from the old KStyle WidgetProperties */
    enum Metrics
    {

        // frames
        Frame_FrameWidth = 2,
        Frame_FrameRadius = 3,

        // layout
        Layout_TopLevelMarginWidth = 10,
        Layout_ChildMarginWidth = 6,
        Layout_DefaultSpacing = 6,

        // line editors
        LineEdit_FrameWidth = 8,

        // menu items
        MenuItem_MarginWidth = 4,
        MenuItem_BoxTextSpace = 4,
        MenuButton_IndicatorWidth = 20,

        // combobox
        ComboBox_FrameWidth = 6,

        // spinbox
        SpinBox_FrameWidth = 8,
        SpinBox_ArrowButtonWidth = 20,

        // groupbox title margin
        GroupBox_TitleMarginWidth = 4,

        // buttons
        Button_MarginWidth = 6,
        Button_BoxTextSpace = 4,

        // tool buttons
        ToolButton_MarginWidth = 6,
        ToolButton_BoxTextSpace = 12,

        // checkboxes and radio buttons
        CheckBox_Size = 22,
        CheckBox_FocusMarginWidth = 2,
        CheckBox_BoxTextSpace = 8,

        // menubar items
        MenuBarItem_MarginWidth = 10,
        MenuBarItem_MarginHeight = 8,

        // scrollbars
        ScrollBar_Extend = 20,
        ScrollBar_SliderWidth = 10,
        ScrollBar_MinSliderHeight = 10,
        ScrollBar_NoButtonHeight = 0,
        ScrollBar_SingleButtonHeight = ScrollBar_Extend,
        ScrollBar_DoubleButtonHeight = 2*ScrollBar_Extend,

        // toolbars
        ToolBar_FrameWidth = 2,
        ToolBar_HandleExtent = 8,
        ToolBar_HandleWidth = 6,
        ToolBar_SeparatorWidth = 8,
        ToolBar_ExtensionWidth = 20,
        ToolBar_ItemSpacing = 0,

        // progressbars
        ProgressBar_BusyIndicatorSize = 14,
        ProgressBar_Thickness = 6,
        ProgressBar_BoxTextSpace = 4,

        // mdi title bar
        TitleBar_MarginWidth = 4,

        // sliders
        Slider_Thickness = 6,
        Slider_ControlThickness = 20,

        // tabbar
        TabBar_TabMarginHeight = 4,
        TabBar_TabMarginWidth = 8,
        TabBar_TabMinWidth = 80,
        TabBar_TabMinHeight = 28,
        TabBar_TabRadius = 3,
        TabBar_TabOverlap = 1,
        TabBar_BaseOverlap = 2,

        // tab widget
        TabWidget_MarginWidth = 4,

        // toolbox
        ToolBox_TabMinWidth = 80,
        ToolBox_TabBoxTextSpace = 4,

        // tooltips
        ToolTip_FrameWidth = 3,

        // list headers
        Header_MarginWidth = 8,
        Header_BoxTextSpace = 4,
        Header_ArrowSize = 10,

        // tree view
        ItemView_ArrowSize = 10,
        ItemView_ItemMarginWidth = 4,

        // shadow
        Shadow_Size = 10,
        Shadow_Overlap = 4

    };

    //! animation mode
    enum AnimationMode
    {
        AnimationNone = 0,
        AnimationHover = 1<<0,
        AnimationFocus = 1<<1,
        AnimationEnable = 1<<2
    };

    Q_DECLARE_FLAGS(AnimationModes, AnimationMode)

    //! corners
    enum Corner
    {
        CornerTopLeft = 1 << 0,
        CornerTopRight = 1 << 1,
        CornerBottomLeft = 1 << 2,
        CornerBottomRight = 1 << 3,
        CornersTop = CornerTopLeft|CornerTopRight,
        CornersBottom = CornerBottomLeft|CornerBottomRight,
        CornersLeft = CornerTopLeft|CornerBottomLeft,
        CornersRight = CornerTopRight|CornerBottomRight,
        CornersAll = CornerTopLeft|CornerTopRight|CornerBottomLeft|CornerBottomRight
    };

    Q_DECLARE_FLAGS( Corners, Corner );

    //! checkbox state (used for checkboxes _and_ radio buttons)
    enum CheckBoxState
    {
        CheckOff,
        CheckPartial,
        CheckOn
    };

    //! arrow orientation
    enum ArrowOrientation
    {
        ArrowNone,
        ArrowUp,
        ArrowDown,
        ArrowLeft,
        ArrowRight
    };

    //! button type
    enum ButtonType
    {
        ButtonClose,
        ButtonMaximize,
        ButtonMinimize,
        ButtonRestore
    };

    //! shadow area
    enum ShadowArea
    {
        ShadowAreaTop,
        ShadowAreaBottom
    };

}

Q_DECLARE_OPERATORS_FOR_FLAGS( Breeze::AnimationModes );
Q_DECLARE_OPERATORS_FOR_FLAGS( Breeze::Corners );

#endif