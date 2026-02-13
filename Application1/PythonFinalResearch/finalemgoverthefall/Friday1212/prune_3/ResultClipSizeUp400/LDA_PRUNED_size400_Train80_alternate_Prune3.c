// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.53%
// test_accuracy: 72.32%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:46:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.812762, 0.812766,
    -0.150362, 0.150374,
    0.552232, -0.552254,
    0.653159, -0.653155,
    0.936478, -0.936449,
    -1.303626, 1.303580,
    0.022648, -0.022641,
    0.152865, -0.152857,
    -0.414787, 0.414789,
    0.638723, -0.638731,
    -0.510235, 0.510242,
    0.058262, -0.058269,
};

float Cg_init[2] = {
    -0.355228, -0.355233
};

float xstd_init[12] = {
    0.003609, 0.001365, 0.101453, 0.169313, 0.001628, 0.000495, 0.029524, 0.083441, 0.001168, 0.000092, 0.018230, 0.065755
};

float xmean_init[12] = {
    0.009676, -0.006266, 0.169262, 0.573990, 0.003206, -0.007724, 0.007553, 0.050049, 0.003208, -0.007807, 0.004532, 0.066601
};

