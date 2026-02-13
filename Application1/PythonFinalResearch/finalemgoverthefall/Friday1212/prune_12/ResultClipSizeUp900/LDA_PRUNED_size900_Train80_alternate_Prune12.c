// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 76.10%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:52:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.782391, 0.782547,
    -0.274530, 0.274462,
    0.764627, -0.764706,
    0.529492, -0.529512,
    1.091872, -1.091724,
    -1.062080, 1.061926,
    -0.198465, 0.198471,
    -0.102396, 0.102402,
    0.528787, -0.528493,
    0.208870, -0.209639,
    -0.326912, 0.327160,
    0.102611, -0.102335,
};

float Cg_init[2] = {
    -0.563942, -0.563973
};

float xstd_init[12] = {
    0.003218, 0.001277, 0.101455, 0.169521, 0.001235, 0.000374, 0.019679, 0.068672, 0.000497, 0.000062, 0.011540, 0.056106
};

float xmean_init[12] = {
    0.009476, -0.006320, 0.174706, 0.587294, 0.003043, -0.007765, 0.005137, 0.047471, 0.003071, -0.007820, 0.002863, 0.060471
};

