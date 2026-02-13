// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.96%
// test_accuracy: 73.44%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:52:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.758999, 0.759041,
    -0.270377, 0.270365,
    0.558235, -0.558284,
    0.908319, -0.908295,
    1.019649, -1.019669,
    -0.832800, 0.832853,
    -0.228651, 0.228631,
    -0.206072, 0.206062,
    -0.784593, 0.784680,
    0.650466, -0.650647,
    -0.470226, 0.470292,
    0.037731, -0.037664,
};

float Cg_init[2] = {
    -0.453761, -0.453781
};

float xstd_init[12] = {
    0.003499, 0.001186, 0.104934, 0.177930, 0.001586, 0.000457, 0.024489, 0.077984, 0.001977, 0.000098, 0.017980, 0.070987
};

float xmean_init[12] = {
    0.009576, -0.006340, 0.172167, 0.579500, 0.003269, -0.007727, 0.006889, 0.053333, 0.003315, -0.007806, 0.005056, 0.068834
};

