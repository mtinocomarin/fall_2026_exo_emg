// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.13%
// test_accuracy: 68.27%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 12:40:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.770392, 0.770466,
    0.156010, -0.156107,
    0.328033, -0.328078,
    0.527348, -0.527337,
    -0.458821, 0.458837,
    0.279377, -0.279356,
    -0.060030, 0.060039,
    -0.023241, 0.023197,
    0.139109, -0.138865,
    -0.063861, 0.063382,
    -0.338756, 0.338881,
    0.025071, -0.024925,
};

float Cg_init[2] = {
    -0.190612, -0.190615
};

float xstd_init[12] = {
    0.004403, 0.002027, 0.150017, 0.202761, 0.001024, 0.000183, 0.026380, 0.080377, 0.000658, 0.000159, 0.027592, 0.105014
};

float xmean_init[12] = {
    0.010365, -0.005691, 0.242565, 0.682308, 0.003357, -0.007767, 0.008786, 0.075128, 0.003510, -0.007738, 0.012376, 0.116565
};

