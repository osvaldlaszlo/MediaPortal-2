<?xml version="1.0" encoding="utf-8"?>
<Grid
  xmlns="www.team-mediaportal.com/2008/mpf/directx"
  xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
  xmlns:fanart="clr-namespace:MediaPortal.Extensions.UserServices.FanArtService.Client;assembly=FanArtService.Client"
  xmlns:media="clr-namespace:MediaPortal.UiComponents.Media.Models.AspectWrappers;assembly=Media"
  Grid.Column="2" Grid.Row="0" x:Name="MediaItemDetails"
  Margin="0,630,-1755,-40" HorizontalAlignment="Stretch" VerticalAlignment="Stretch">

  <Grid.Resources>
    <fanart:FanArtImageSourceConverter x:Key="FanArtImageSourceConverter"/>
  </Grid.Resources>

    <media:MovieAspectWrapper MediaItem="{Binding Source={StaticResource FanArtBackgroundModel},Path=MediaItem}">
      <media:MovieAspectWrapper.Template>
        <ControlTemplate>
          <Grid HorizontalAlignment="Stretch" DataContext="{Binding RelativeSource={RelativeSource TemplatedParent}}">
            <Grid.RowDefinitions>
              <RowDefinition Height="*"/>
            </Grid.RowDefinitions>
            <Grid.ColumnDefinitions>
              <ColumnDefinition Width="80"/>
              <ColumnDefinition Width="1670"/>
              <ColumnDefinition Width="200"/>
            </Grid.ColumnDefinitions>
            
    
            <Label Grid.Row="0" Grid.Column="1" x:Name="MovieCollectionName" DataContext="{Binding RelativeSource={RelativeSource TemplatedParent}}"
                   Content="{Binding Source={StaticResource FanArtBackgroundModel}, Path=FanArtName}" Color="Black" FontSize="{ThemeResource NormalFontSize}" Margin="-20,0,20,0"
                   HorizontalAlignment="Center" VerticalAlignment="Bottom"/>

            <Label Grid.Row="0" Grid.Column="1"  HorizontalAlignment="Right" 
                   VerticalAlignment="Bottom" DataContext="{Binding RelativeSource={RelativeSource TemplatedParent}}"
                   Color="Black" FontSize="{ThemeResource NormalFontSize}" Margin="0,0,10,0" Content="{Binding Source={StaticResource FanArtBackgroundModel}, Path=NumItems}"/>
            
            <!--StackPanel Orientation="Horizontal" HorizontalAlignment="Right" Grid.Row="0" Grid.Column="1" VerticalAlignment="Center">
              <StarRatingPanel x:Name="RatingReadOnly" IsReadOnly="True" StarReadOnlyTemplate="{StaticResource StarReadOnlyBlackTemplate}"
                                           Maximum="10" Value="{Binding TotalRating}" Margin="0,2,0,-2">
                <StarRatingPanel.LayoutTransform>
                  <TransformGroup>
                    <ScaleTransform ScaleX="1.65" ScaleY="1.5"/>
                  </TransformGroup>
                </StarRatingPanel.LayoutTransform>
              </StarRatingPanel>

              <Label x:Name="RatingCountLabel" Color="Black"  Margin="8,0,0,0">
                <Label.Content>
                  <Binding Path="TotalRating" Converter="{StaticResource StringFormatConverter}" ConverterParameter="{}({0:F1})"/>
                </Label.Content>
              </Label>
            </StackPanel-->
             
          </Grid>  
        </ControlTemplate>
      </media:MovieAspectWrapper.Template>
    </media:MovieAspectWrapper>

</Grid>
